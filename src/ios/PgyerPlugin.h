#import <Cordova/CDV.h>

@interface PgyerPlugin : CDVPlugin

@property(nonatomic,strong)NSString *partner;
@property(nonatomic,strong)NSString *seller;
@property(nonatomic,strong)NSString *privateKey;

- (void) pay:(CDVInvokedUrlCommand*)command;
@end
