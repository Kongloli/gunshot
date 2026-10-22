#pragma once
#import <UIKit/UIKit.h>
#import <Photos/Photos.h>
FOUNDATION_EXPORT BOOL GSIsGooglePhotos(void);
FOUNDATION_EXPORT void GSInstallNativeRouting(void);
FOUNDATION_EXPORT BOOL GSNativeRoutingAvailable(void);
FOUNDATION_EXPORT BOOL GSNativeRoutingEnabled(void);
FOUNDATION_EXPORT NSString *GSNativeRoutingAccount(void);
FOUNDATION_EXPORT void GSSetNativeRouting(BOOL enabled, NSString *account);
FOUNDATION_EXPORT NSDictionary *GSNativeRoutingSnapshot(void);
// Optional cutoff: assets created before this date are not uploaded through GoToHP.
// nil means every asset is routed (the default).
FOUNDATION_EXPORT NSDate *GSNativeRoutingCutoff(void);
FOUNDATION_EXPORT void GSSetNativeRoutingCutoff(NSDate *cutoff);
FOUNDATION_EXPORT BOOL GSNativeRoutingSkipsAsset(PHAsset *asset);
