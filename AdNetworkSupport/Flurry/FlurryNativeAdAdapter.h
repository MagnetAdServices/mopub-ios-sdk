#import "MPNativeAdAdapter.h"
#import "FlurryAdNative.h"

@interface FlurryNativeAdAdapter : NSObject <MPNativeAdAdapter>

@property (nonatomic, weak) id<MPNativeAdAdapterDelegate> delegate;
@property (nonatomic, strong) UIView *videoViewContainer;

- (instancetype)initWithFlurryAdNative:(FlurryAdNative *)adNative;

@end
