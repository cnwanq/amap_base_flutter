//
// Created by Yohom Bao on 2018-12-16.
//

#import <Foundation/Foundation.h>
#import "AMapSearchAPI.h"
#import "IMethodHandler.h"

@protocol FSSearchMethodHandler;
@protocol AMapSearchDelegate;

@interface SearchGeocode : NSObject <FSSearchMethodHandler, AMapSearchDelegate>
@end

@interface SearchReGeocode : NSObject <FSSearchMethodHandler, AMapSearchDelegate>
@end

@interface SearchPoiBound : NSObject <FSSearchMethodHandler, AMapSearchDelegate>
@end

@interface SearchPoiId : NSObject <FSSearchMethodHandler, AMapSearchDelegate>
@end

@interface SearchPoiKeyword : NSObject <FSSearchMethodHandler, AMapSearchDelegate>
@end

@interface SearchPoiPolygon : NSObject <FSSearchMethodHandler, AMapSearchDelegate>
@end

@interface SearchRoutePoiLine : NSObject <FSSearchMethodHandler, AMapSearchDelegate>
@end

@interface SearchRoutePoiPolygon : NSObject <FSSearchMethodHandler, AMapSearchDelegate>
@end

@interface CalculateDriveRoute : NSObject <FSSearchMethodHandler, AMapSearchDelegate>
@end

@interface CalculateWalkRoute : NSObject <FSSearchMethodHandler, AMapSearchDelegate>
@end

@interface DistanceSearch : NSObject <FSSearchMethodHandler, AMapSearchDelegate>
@end

@interface SearchBusStation : NSObject <FSSearchMethodHandler, AMapSearchDelegate>
@end
