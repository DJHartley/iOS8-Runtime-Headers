/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, NSDictionary, NSURL, NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface CoreDAVMultiMoveWithFallbackTaskGroup : CoreDAVTaskGroup  {
    NSSet *_sourceURLs;
    NSURL *_destinationURL;
    int _overwrite;
    bool_useFallback;
    NSDictionary *_sourceEntityDataPayloads;
    NSDictionary *_sourceEntityDataContentTypes;
    NSDictionary *_sourceEntityETags;
    NSMutableSet *_destinationURLs;
    NSMutableDictionary *_destinationEntityETags;
    NSMutableArray *_outstandingSourceURLsToMove;
}

@property(readonly) NSSet * sourceURLs;
@property(readonly) NSURL * destinationURL;
@property(readonly) NSDictionary * sourceEntityETags;
@property(readonly) NSDictionary * sourceEntityDataPayloads;
@property(readonly) NSDictionary * sourceEntityDataContentTypes;
@property(readonly) bool useFallback;
@property(readonly) int overwrite;
@property(readonly) NSMutableDictionary * destinationEntityETags;
@property(readonly) NSMutableSet * destinationURLs;
@property(retain) NSMutableArray * outstandingSourceURLsToMove;


- (id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(bool)arg3 useFallback:(bool)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9;
- (void)setOutstandingSourceURLsToMove:(id)arg1;
- (void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(id)arg3;
- (id)destinationURLs;
- (void)_completedPutTask:(id)arg1 sourceURL:(id)arg2;
- (id)sourceEntityDataContentTypes;
- (id)sourceEntityDataPayloads;
- (id)_eTagFromTaskResponseHeaders:(id)arg1;
- (id)destinationEntityETags;
- (void)_completedMoveTask:(id)arg1 sourceURL:(id)arg2;
- (id)sourceEntityETags;
- (id)fullDestinationURLFromSourceURL:(id)arg1;
- (id)outstandingSourceURLsToMove;
- (void)processOutstandingTasks;
- (id)filenameFromURL:(id)arg1;
- (id)sourceURLs;
- (bool)useFallback;
- (int)overwrite;
- (void)startTaskGroup;
- (id)destinationURL;
- (void)dealloc;
- (id)description;

@end
