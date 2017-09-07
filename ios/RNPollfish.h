#if __has_include(<React/RCTBridgeModule.h>)
  #import <React/RCTBridgeModule.h>
#else
  #import "RCTBridgeModule.h"
#endif
#import "RCTEventDispatcher.h"
#import <Pollfish/Pollfish.h>

@interface RNPollfish : NSObject <RCTBridgeModule>

@end
