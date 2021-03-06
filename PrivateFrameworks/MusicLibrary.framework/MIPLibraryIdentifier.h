/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface MIPLibraryIdentifier : PBCodable <NSCopying> {
    long long _libraryId;
    NSString *_libraryName;
    struct { 
        unsigned int libraryId : 1; 
    } _has;
}

@property(readonly) bool hasLibraryName;
@property(retain) NSString * libraryName;
@property bool hasLibraryId;
@property long long libraryId;


- (void)copyTo:(id)arg1;
- (bool)hasLibraryId;
- (void)setHasLibraryId:(bool)arg1;
- (void)setLibraryId:(long long)arg1;
- (bool)hasLibraryName;
- (void)setLibraryName:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)libraryName;
- (long long)libraryId;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
