//
// Created by Yohom Bao on 2018-12-01.
//

#import "FSUnifiedAssets.h"
#import "AMapBaseSearchPlugin.h"

@implementation FSUnifiedAssets {

}
+ (NSString *)getAssetPath:(NSString *)asset {
    NSString *key = [AMapBaseSearchPlugin.registrar lookupKeyForAsset:asset];
    return [[NSBundle mainBundle] pathForResource:key ofType:nil];
}

+ (NSString *)getDefaultAssetPath:(NSString *)asset {
    NSString *key = [AMapBaseSearchPlugin.registrar lookupKeyForAsset:asset fromPackage:@"amap_base"];
    return [[NSBundle mainBundle] pathForResource:key ofType:nil];
}


@end
