/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSDictionary, NSData, NSMutableDictionary, NSMutableArray;

@interface CKModifyRecordsOperation : CKDatabaseOperation  {
    bool_atomic;
    bool_shouldOnlySaveAssetContent;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    long long _savePolicy;
    NSData *_clientChangeTokenData;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _perRecordProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _perRecordCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _modifyRecordsCompletionBlock;

    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSMutableArray *_savedRecords;
    NSMutableArray *_deletedRecordIDs;
    NSMutableDictionary *_recordsByRecordIDs;
    NSMutableDictionary *_recordErrors;
    NSMutableDictionary *_assetsByRecordIDAndRecordKey;
}

@property(copy) NSArray * recordsToSave;
@property(copy) NSArray * recordIDsToDelete;
@property long long savePolicy;
@property(copy) NSData * clientChangeTokenData;
@property bool atomic;
@property(copy) id perRecordProgressBlock;
@property(copy) id perRecordCompletionBlock;
@property(copy) id modifyRecordsCompletionBlock;
@property bool shouldOnlySaveAssetContent;
@property(copy) NSDictionary * recordIDsToDeleteToEtags;
@property(retain) NSDictionary * conflictLosersToResolveByRecordID;
@property(retain) NSMutableArray * savedRecords;
@property(retain) NSMutableArray * deletedRecordIDs;
@property(retain) NSMutableDictionary * recordsByRecordIDs;
@property(retain) NSMutableDictionary * recordErrors;
@property(retain) NSMutableDictionary * assetsByRecordIDAndRecordKey;


- (void)setAssetsByRecordIDAndRecordKey:(id)arg1;
- (void)setRecordsByRecordIDs:(id)arg1;
- (void)setDeletedRecordIDs:(id)arg1;
- (void)setSavedRecords:(id)arg1;
- (void)setPerRecordCompletionBlock:(id)arg1;
- (void)setPerRecordProgressBlock:(id)arg1;
- (id)modifyRecordsCompletionBlock;
- (id)perRecordCompletionBlock;
- (id)savedRecords;
- (id)deletedRecordIDs;
- (id)perRecordProgressBlock;
- (id)assetsByRecordIDAndRecordKey;
- (id)recordsByRecordIDs;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (id)conflictLosersToResolveByRecordID;
- (void)setAtomic:(bool)arg1;
- (bool)atomic;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (id)recordIDsToDeleteToEtags;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (bool)shouldOnlySaveAssetContent;
- (void)setSavePolicy:(long long)arg1;
- (long long)savePolicy;
- (void)setRecordIDsToDelete:(id)arg1;
- (id)recordIDsToDelete;
- (void)setRecordsToSave:(id)arg1;
- (id)recordsToSave;
- (void)setModifyRecordsCompletionBlock:(id)arg1;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (void)setClientChangeTokenData:(id)arg1;
- (id)clientChangeTokenData;
- (void)setRecordErrors:(id)arg1;
- (id)recordErrors;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
