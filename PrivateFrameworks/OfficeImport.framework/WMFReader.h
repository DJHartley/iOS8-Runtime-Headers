/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WMFPlayer, NSString;

@interface WMFReader : NSObject <MFReader> {
    int m_recordsRead;
    WMFPlayer *m_player;
    unsigned int m_length;
    const char *m_pBuffer;
    unsigned int m_cursor;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (int)moveDataCursor:(unsigned int)arg1;
- (int)checkBytesAvailable:(unsigned int)arg1;
- (int)playRecord;
- (int)playHeaders;
- (id)initWithWMFPlayer:(id)arg1;
- (int)play:(id)arg1;
- (void)dealloc;
- (oneway void)release;

@end
