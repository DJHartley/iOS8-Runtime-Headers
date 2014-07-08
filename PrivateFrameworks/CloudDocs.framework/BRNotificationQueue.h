/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {
    NSMutableArray *_array;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_index;
    unsigned long long _dequeued;
}

@property(readonly) unsigned long long count;


- (void)addDequeueCallback:(id)arg1;
- (void)_processCallBacks;
- (void)_filterIndex:(id)arg1;
- (void)addNotification:(id)arg1 asDead:(bool)arg2;
- (void)dequeue:(unsigned long long)arg1 block:(id)arg2;
- (id)init;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;

@end