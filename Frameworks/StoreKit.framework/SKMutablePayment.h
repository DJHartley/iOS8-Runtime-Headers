/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSString, NSData, NSDictionary;

@interface SKMutablePayment : SKPayment  {
}

@property(copy) NSString * applicationUsername;
@property(copy) NSString * productIdentifier;
@property long long quantity;
@property(copy) NSData * requestData;
@property(copy) NSString * partnerIdentifier;
@property(copy) NSString * partnerTransactionIdentifier;
@property(copy) NSDictionary * requestParameters;


- (void)setPartnerTransactionIdentifier:(id)arg1;
- (void)setPartnerIdentifier:(id)arg1;
- (void)setRequestData:(id)arg1;
- (void)setQuantity:(long long)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setApplicationUsername:(id)arg1;
- (void)setRequestParameters:(id)arg1;

@end
