//
// Created by Yohom Bao on 2018-12-12.
//

#import <Foundation/Foundation.h>
#import <Flutter/Flutter.h>

//region 地图
@class FlutterMethodCall;

@protocol MapMethodHandler <NSObject>
@required
- (void)onMethodCall:(FlutterMethodCall *)call :(FlutterResult)result;
@end
//endregion

//region 搜索
@protocol FSSearchMethodHandler <NSObject>
@required
- (void)onMethodCall:(FlutterMethodCall *)call :(FlutterResult)result;
@end
//endregion

//region 导航
@protocol FSNaviMethodHandler <NSObject>
@required
- (void)onMethodCall:(FlutterMethodCall *)call :(FlutterResult)result;
@end
//endregion

//region 定位
@protocol FSLocationMethodHandler <NSObject>
@required
- (void)onMethodCall:(FlutterMethodCall *)call :(FlutterResult)result;
@end
//endregion
