#import "MPNativeAdAdapter.h"
#import "FlurryAdNative.h"

@interface FlurryNativeAdAdapter : NSObject <MPNativeAdAdapter>

@property (nonatomic, weak) id<MPNativeAdAdapterDelegate> delegate;

- (instancetype)initWithFlurryAdNative:(FlurryAdNative *)adNative;

@end
