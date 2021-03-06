/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEOPDPlaceResponse, GEOMapServiceTraits, GEOPDPlaceRequest, GEOMapRegion;

@interface _GEOPlaceRequestTicket : NSObject <GEOMapServiceTicket> {
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
    GEOMapServiceTraits *_traits;
    GEOMapRegion *_resultBoundingRegion;
    bool_canceled;
}

@property(getter=isCanceled,readonly) bool canceled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) GEOMapServiceTraits * traits;
@property(readonly) GEOMapRegion * resultBoundingRegion;


- (id)resultBoundingRegion;
- (void)applyToCorrectedSearch:(id)arg1;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (void)_processRequest:(id)arg1 withHandler:(id)arg2 refinedHandler:(id)arg3 networkActivity:(id)arg4;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (void)submitWithHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (bool)isCanceled;
- (id)traits;
- (void)cancel;
- (void)dealloc;
- (id)description;

@end
