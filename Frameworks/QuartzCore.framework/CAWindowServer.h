/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSArray;

@interface CAWindowServer : NSObject  {
    struct CAWindowServerImpl { struct __CFArray {} *x1; unsigned int x2; } *_impl;
}

@property(readonly) NSArray * displays;
@property(getter=isMirroringEnabled) bool mirroringEnabled;
@property unsigned int rendererFlags;
@property(getter=isSecure) bool secure;

+ (id)context;
+ (id)serverIfRunning;
+ (id)server;
+ (id)contextWithOptions:(id)arg1;

- (id)displayWithName:(id)arg1;
- (unsigned int)contextIdHostingContextId:(unsigned int)arg1;
- (unsigned int)taskPortOfContextId:(unsigned int)arg1;
- (unsigned int)clientPortOfContextId:(unsigned int)arg1;
- (id)insecureProcessIds;
- (unsigned int)rendererFlags;
- (bool)isMirroringEnabled;
- (void)setMirroringEnabled:(bool)arg1;
- (void)_detectDisplays;
- (id)displayWithUniqueId:(id)arg1;
- (id)displayWithDisplayId:(unsigned int)arg1;
- (void)removeAllDisplays;
- (void)removeDisplay:(id)arg1;
- (void)addDisplay:(id)arg1;
- (id)displays;
- (id)init;
- (bool)isSecure;
- (void)dealloc;
- (id)description;
- (id)_init;
- (void)setSecure:(bool)arg1;
- (void)setRendererFlags:(unsigned int)arg1;

@end
