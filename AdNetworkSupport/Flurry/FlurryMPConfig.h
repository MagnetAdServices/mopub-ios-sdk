#import <Foundation/Foundation.h>
#import "Flurry.h"

#define FlurryMediationOrigin @"Flurry_Mopub_iOS"
#define FlurryAdapterVersion @"7.6.4"

@interface FlurryMPConfig : NSObject

+ (void)startSessionWithApiKey:(NSString *) apiKey;

@end
