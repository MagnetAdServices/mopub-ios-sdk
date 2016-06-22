#import <UIKit/UIKit.h>
#import "MPNativeAdRenderer.h"

@class MPNativeAdRendererConfiguration;
@class MPStaticNativeAdRendererSettings;

@interface FlurryNativeVideoAdRenderer : NSObject <MPNativeAdRenderer>

@property (nonatomic, readonly) MPNativeViewSizeHandler viewSizeHandler;

+ (MPNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:(id<MPNativeAdRendererSettings>)rendererSettings;

@end
