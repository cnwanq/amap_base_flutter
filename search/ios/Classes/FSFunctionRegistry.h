//
// Created by Yohom Bao on 2018-12-12.
//

#import <Foundation/Foundation.h>

@protocol MapMethodHandler;
@interface FSMapFunctionRegistry : NSObject
+ (NSDictionary<NSString *, NSObject <MapMethodHandler> *> *)mapMethodHandler;
@end

@protocol SearchMethodHandler;
@interface FSSearchFunctionRegistry : NSObject
+ (NSDictionary<NSString *, NSObject <SearchMethodHandler> *> *)searchMethodHandler;
@end

@protocol NaviMethodHandler;
@interface FSNaviFunctionRegistry : NSObject
+ (NSDictionary<NSString *, NSObject <NaviMethodHandler> *> *)naviMethodHandler;
@end

@protocol LocationMethodHandler;
@interface FSLocationFunctionRegistry : NSObject
+ (NSDictionary<NSString *, NSObject <LocationMethodHandler> *> *)locationMethodHandler;
@end
