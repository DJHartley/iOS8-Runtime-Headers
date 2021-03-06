/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLImageTable, NSMutableArray, NSString;

@interface PLTemporaryImageTable : NSObject  {
    PLImageTable *_imageTable;
    unsigned long long _nextTableEntryIndex;
    NSMutableArray *_itemIndexToThumbEntryMapping;
    NSString *_imageTablePath;
    int _imageFormat;
}


- (void)insertItemAtIndex:(unsigned long long)arg1;
- (id)imageForItemAtIndex:(unsigned long long)arg1;
- (id)dataForItemAtIndex:(unsigned long long)arg1 widthOut:(int*)arg2 heightOut:(int*)arg3 bytesPerRowOut:(int*)arg4 dataWidthOut:(int*)arg5 dataHeightOut:(int*)arg6 imageDataOffset:(int*)arg7;
- (void)setImage:(id)arg1 videoDuration:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (id)initWithWithPath:(id)arg1 imageFormat:(int)arg2;
- (unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)arg1;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)_cleanup;
- (void)dealloc;
- (void)reset;

@end
