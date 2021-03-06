/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray, NSData, NSMutableArray;

@interface _UIAppearanceRecorder : NSObject  {
    NSString *_classNameToRecord;
    Class _superclassToRecord;
    NSArray *_containerClassNames;
    NSMutableArray *_customizations;
    NSArray *_unarchivedCustomizations;
}

@property(readonly) NSData * _serializedRepresentation;
@property(setter=_setClassNameToRecord:,copy) NSString * _classNameToRecord;
@property(setter=_setSuperclassToRecord:) Class _superclassToRecord;
@property(setter=_setContainerClassNames:,copy) NSArray * _containerClassNames;

+ (id)_sharedAppearanceRecorderForClassNamed:(id)arg1 superclass:(Class)arg2 whenContainedIn:(id)arg3;
+ (id)_sharedAppearanceRecorder;
+ (id)_sharedAppearanceRecorderForClass:(Class)arg1 whenContainedIn:(id)arg2;

- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)_containerClassNames;
- (Class)_superclassToRecord;
- (id)_serializedRepresentation;
- (void)_applyCustomizations;
- (id)_classNameToRecord;
- (void)_setContainerClassNames:(id)arg1;
- (void)_setSuperclassToRecord:(Class)arg1;
- (void)_setClassNameToRecord:(id)arg1;
- (void)_importCustomizations:(id)arg1 withArchiveVersion:(long long)arg2;
- (void)_recordInvocation:(id)arg1 withClassName:(id)arg2 containerClassNames:(id)arg3 selectorString:(id)arg4 forRemoteProcess:(bool)arg5;

@end
