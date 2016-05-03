#import "FlurryAdInterstitialDelegate.h"
#if __has_include(<MoPub/MoPub.h>)
#import <MoPub/MoPub.h>
#else
#import "MPInterstitialCustomEvent.h"
#endif

@interface FlurryInterstitialCustomEvent : MPInterstitialCustomEvent<FlurryAdInterstitialDelegate>

@end
