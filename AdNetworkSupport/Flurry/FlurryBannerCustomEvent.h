#import "FlurryAdBannerDelegate.h"
#if __has_include(<MoPub/MoPub.h>)
#import <MoPub/MoPub.h>
#else
#import "MPBannerCustomEvent.h"
#endif

@interface FlurryBannerCustomEvent : MPBannerCustomEvent <FlurryAdBannerDelegate>

@end
