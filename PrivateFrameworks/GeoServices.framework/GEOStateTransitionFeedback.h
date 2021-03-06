/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStateTransitionFeedback : PBCodable <NSCopying> {
    int _newValue;
    int _oldValue;
    int _stateType;
    struct { 
        unsigned int newValue : 1; 
        unsigned int oldValue : 1; 
        unsigned int stateType : 1; 
    } _has;
}

@property bool hasStateType;
@property int stateType;
@property bool hasOldValue;
@property int oldValue;
@property bool hasNewValue;
@property int newValue;


- (int)stateType;
- (bool)hasNewValue;
- (void)setHasNewValue:(bool)arg1;
- (bool)hasOldValue;
- (void)setHasOldValue:(bool)arg1;
- (bool)hasStateType;
- (void)setHasStateType:(bool)arg1;
- (int)oldValue;
- (void)setOldValue:(int)arg1;
- (void)setNewValue:(int)arg1;
- (void)setStateType:(int)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)newValue;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
