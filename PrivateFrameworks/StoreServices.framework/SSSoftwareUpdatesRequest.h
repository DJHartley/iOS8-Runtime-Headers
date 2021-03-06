/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSoftwareUpdatesContext, <SSSoftwareUpdatesRequestDelegate>;

@interface SSSoftwareUpdatesRequest : SSRequest  {
    SSSoftwareUpdatesContext *_context;
}

@property(readonly) SSSoftwareUpdatesContext * updateQueueContext;
@property <SSSoftwareUpdatesRequestDelegate> * delegate;


- (id)updateQueueContext;
- (id)initWithUpdateQueueContext:(id)arg1;
- (void)startWithUpdatesResponseBlock:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)start;
- (void)dealloc;

@end
