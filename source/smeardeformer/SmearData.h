/**
 * Copyright (C) 2013, Niklas Rosenstein
 * All rights reserved.
 *
 * SmearData.h
 */

#ifndef NR_SMEARDATA_H
#define NR_SMEARDATA_H

    #include <c4d.h>

    struct SmearData {

        // TODO

        SmearData(const BaseContainer* bc, BaseDocument* doc, BaseObject* mod, PolygonObject* dest);

        ~SmearData() { }

        BaseDocument* doc;
        BaseObject* mod;
        PolygonObject* dest;

        Bool interactive;
        Float strength;

        Bool inverted;
        const SplineData* weight_spline;
        const SplineData* ease_spline;

    };

#endif /* NR_SMEARDATA_H */
