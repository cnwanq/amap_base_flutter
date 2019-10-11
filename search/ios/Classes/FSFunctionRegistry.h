//
// Created by Yohom Bao on 2018-12-12.
//

#import <Foundation/Foundation.h>

@protocol MapMethodHandler;
@interface FSMapFunctionRegistry : NSObject
+ (NSDictionary<NSString *, NSObject <MapMethodHandler> *> *)mapMethodHandler;
@end

@protocol FSSearchMethodHandler;
@interface FSSearchFunctionRegistry : NSObject
+ (NSDictionary<NSString *, NSObject <FSSearchMethodHandler> *> *)FSSearchMethodHandler;
@end

@protocol FSNaviMethodHandler;
@interface FSNaviFunctionRegistry : NSObject
+ (NSDictionary<NSString *, NSObject <FSNaviMethodHandler> *> *)FSNaviMethodHandler;
@end

@protocol FSLocationMethodHandler;
@interface FSLocationFunctionRegistry : NSObject
+ (NSDictionary<NSString *, NSObject <FSLocationMethodHandler> *> *)FSLocationMethodHandler;
@end
