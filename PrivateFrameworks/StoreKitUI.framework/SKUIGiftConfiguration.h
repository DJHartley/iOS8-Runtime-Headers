/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSHashTable, NSString, NSArray, NSURL, NSOperationQueue, NSMutableDictionary, SKUIClientContext;

@interface SKUIGiftConfiguration : NSObject  {
    NSArray *_charities;
    NSMutableDictionary *_charityImages;
    SKUIClientContext *_clientContext;
    NSString *_currencySymbol;
    long long _currencySymbolPosition;
    NSArray *_fixedGiftAmountLabels;
    NSArray *_fixedGiftAmountValues;
    NSString *_senderName;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _giftAmountRange;
    NSURL *_giftPurchaseURL;
    NSURL *_giftValidationURL;
    long long _maximumMessageLength;
    NSHashTable *_observers;
    NSOperationQueue *_operationQueue;
    NSString *_senderEmailAddress;
    NSString *_storeFrontName;
    NSArray *_themes;
}

@property(readonly) SKUIClientContext * clientContext;
@property(readonly) NSString * currencySymbol;
@property(readonly) long long currencySymbolPosition;
@property(readonly) NSArray * fixedGiftAmountLabels;
@property(readonly) NSArray * fixedGiftAmountValues;
@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } giftAmountRange;
@property(readonly) NSURL * giftPurchaseURL;
@property(readonly) NSURL * giftValidationURL;
@property(readonly) long long maximumMessageLength;
@property(readonly) NSString * senderEmailAddress;
@property(readonly) NSString * senderName;
@property(readonly) NSString * storeFrontName;
@property(readonly) NSArray * themes;


- (id)giftPurchaseURL;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })giftAmountRange;
- (id)logoImageForCharity:(id)arg1;
- (void)loadLogoForCharity:(id)arg1;
- (bool)loadCachedConfiguration;
- (id)charityForIdentifier:(id)arg1;
- (void)_setHeaderImage:(id)arg1 forTheme:(id)arg2;
- (void)_finishLoadAccountInfoWithResponse:(id)arg1 error:(id)arg2 block:(id)arg3;
- (void)_loadThemeImages;
- (void)_setLogoImage:(id)arg1 forCharity:(id)arg2;
- (void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(id)arg3;
- (long long)currencySymbolPosition;
- (id)fixedGiftAmountValues;
- (id)fixedGiftAmountLabels;
- (long long)maximumMessageLength;
- (id)storeFrontName;
- (id)giftValidationURL;
- (void)loadConfigurationWithCompletionBlock:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (id)themes;
- (id)senderEmailAddress;
- (id)senderName;
- (id)clientContext;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void).cxx_destruct;
- (id)currencySymbol;

@end
