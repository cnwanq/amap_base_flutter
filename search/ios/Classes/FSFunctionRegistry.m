//
// Created by Yohom Bao on 2018-12-12.
//

#import "FSFunctionRegistry.h"
#import "IMethodHandler.h"
#import "SearchHandlers.h"

static NSDictionary<NSString *, NSObject <MapMethodHandler> *> *_mapDictionary;

@implementation FSMapFunctionRegistry {
}

+ (NSDictionary<NSString *, NSObject <MapMethodHandler> *> *)mapMethodHandler {
    if (!_mapDictionary) {
        _mapDictionary = @{};
    }
    return _mapDictionary;
}

@end

static NSDictionary<NSString *, NSObject <FSSearchMethodHandler> *> *_searchDictionary;

@implementation FSSearchFunctionRegistry {

}
+ (NSDictionary<NSString *, NSObject <FSSearchMethodHandler> *> *)FSSearchMethodHandler {
    if (!_searchDictionary) {
        _searchDictionary = @{
                @"search#calculateDriveRoute": [CalculateDriveRoute alloc],
                @"search#calculateWalkRoute": [CalculateWalkRoute alloc],
                @"search#searchPoi": [SearchPoiKeyword alloc],
                @"search#searchPoiBound": [SearchPoiBound alloc],
                @"search#searchPoiPolygon": [SearchPoiPolygon alloc],
                @"search#searchPoiId": [SearchPoiId alloc],
                @"search#searchRoutePoiLine": [SearchRoutePoiLine alloc],
                @"search#searchRoutePoiPolygon": [SearchRoutePoiPolygon alloc],
                @"search#searchGeocode": [SearchGeocode alloc],
                @"search#searchReGeocode": [SearchReGeocode alloc],
                @"tool#distanceSearch":[DistanceSearch alloc],
                @"search#searchBusStation":[SearchBusStation alloc],
        };
    }
    return _searchDictionary;
}

@end

static NSDictionary<NSString *, NSObject <NaviMethodHandler> *> *_naviDictionary;

@implementation FSNaviFunctionRegistry {

}
+ (NSDictionary<NSString *, NSObject <NaviMethodHandler> *> *)naviMethodHandler {
    if (!_naviDictionary) {
        _naviDictionary = @{
        };
    }
    return _naviDictionary;
}

@end

static NSDictionary<NSString *, NSObject <FSLocationMethodHandler> *> *_locationDictionary;

@implementation FSLocationFunctionRegistry {

}
+ (NSDictionary<NSString *, NSObject <FSLocationMethodHandler> *> *)FSLocationMethodHandler {
    if (!_locationDictionary) {
        _locationDictionary = @{};
    }
    return _locationDictionary;
}

@end
