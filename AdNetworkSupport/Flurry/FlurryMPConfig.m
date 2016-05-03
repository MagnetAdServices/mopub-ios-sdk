#import "FlurryMPConfig.h"

@implementation FlurryMPConfig

+ (void)startSessionWithApiKey:(NSString *)apiKey {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if (![Flurry activeSessionExists]) {
            [Flurry setDebugLogEnabled:NO];
            [Flurry startSession:apiKey];
        }
        [Flurry addOrigin:FlurryMediationOrigin withVersion:FlurryAdapterVersion];
    });
}

@end
