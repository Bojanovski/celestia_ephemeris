#include <celephem/customorbit.h>
#include <celephem/orbit.h>
#include <celastro/date.h>

#include "celengine/universe.h"
#include "celestia/catalogloader.h"
#include "celestia/configfile.h"
#include "celutil/logger.h"


using namespace celestia;

using SolarSystemLoader = CatalogLoader<Universe>;

template<>
bool CatalogLoader<Universe>::load(std::istream& in, const fs::path& dir)
{
    return LoadSolarSystemObjects(in, *m_objDB, dir);
}

void loadSSO(const CelestiaConfig& config, ProgressNotifier* progressNotifier, Universe* universe)
{
    auto solarSystem = std::make_unique<SolarSystemCatalog>();
    universe->setSolarSystemCatalog(std::move(solarSystem));

    // TRANSLATORS: this is a part of phrases "Loading {} catalog", "Skipping {} catalog"
    const char* typeDesc = C_("catalog", "solar system");

    SolarSystemLoader loader(universe,
        typeDesc,
        ContentType::CelestiaCatalog,
        progressNotifier,
        config.paths.skipExtras);

    // First read the solar system files listed individually in the config file.
    fs::path empty;
    for (const auto& file : config.paths.solarSystemFiles)
        loader.process(file, empty);

    // Next, read all the solar system files in the extras directories
    loader.loadExtras(config.paths.extrasDirs);
}

class MyPN : public ProgressNotifier
{
    virtual void update(const std::string& p)
    {
        
    }

};

int main()
{
    util::CreateLogger();

    //auto o = celestia::ephem::GetCustomOrbit("mars");
    //auto d = celestia::astro::Date::systemDate();
    //auto t = celestia::astro::UTCtoTDB(d);
    //auto p = o->positionAtTime(t);
    //auto dist = p.norm();

    auto config = std::make_unique<CelestiaConfig>();
    bool hasConfig = ReadCelestiaConfig("celestia.cfg", *config);


    auto universe = new Universe();
    MyPN pn;

    loadSSO(*config, &pn, universe);


    return 0;
}
