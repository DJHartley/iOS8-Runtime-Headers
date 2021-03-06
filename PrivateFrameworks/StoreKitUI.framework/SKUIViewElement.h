/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSArray, NSSet, NSMutableArray;

@interface SKUIViewElement : IKViewElement  {
    NSMutableArray *_flattenedChildren;
    long long _pinStyle;
}

@property(copy,readonly) NSString * indexBarEntryID;
@property(getter=isEnabled,readonly) bool enabled;
@property(readonly) NSArray * flattenedChildren;
@property(retain,readonly) NSString * itmlID;
@property(readonly) long long pageComponentType;
@property(readonly) NSSet * personalizationLibraryItems;
@property(readonly) long long pinStyle;
@property(readonly) bool rendersWithPerspective;


- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)indexBarEntryID;
- (void)enumerateViewElementsWithDictionary:(id)arg1 factory:(id)arg2 usingBlock:(id)arg3;
- (bool)descendsFromElementWithType:(unsigned long long)arg1;
- (id)featureWithName:(id)arg1;
- (long long)pinStyle;
- (id)personalizationLibraryItems;
- (bool)isDescendentFromViewElement:(id)arg1;
- (id)firstDescendentWithIndexBarEntryID:(id)arg1;
- (id)flattenedChildren;
- (id)persistenceKey;
- (id)firstChildForElementType:(unsigned long long)arg1;
- (bool)rendersWithPerspective;
- (void)enumerateChildrenUsingBlock:(id)arg1;
- (long long)pageComponentType;
- (id)elementWithIdentifier:(id)arg1;
- (bool)isEnabled;
- (void).cxx_destruct;

@end
