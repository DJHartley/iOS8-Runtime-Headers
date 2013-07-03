/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSString, SSURLConnectionRequest;

@interface RadioSearchRequest : RadioRequest  {
    SSURLConnectionRequest *_request;
    BOOL _excludeFeaturedStations;
    NSString *_searchTerm;
    int _searchCategory;
    unsigned int _numberOfSearchResults;
    unsigned int _searchResultsOffset;
}

@property(readonly) NSString * searchTerm;
@property int searchCategory;
@property unsigned int numberOfSearchResults;
@property unsigned int searchResultsOffset;
@property BOOL excludeFeaturedStations;


- (void)setNumberOfSearchResults:(unsigned int)arg1;
- (void)setExcludeFeaturedStations:(BOOL)arg1;
- (BOOL)excludeFeaturedStations;
- (void)setSearchResultsOffset:(unsigned int)arg1;
- (unsigned int)searchResultsOffset;
- (unsigned int)numberOfSearchResults;
- (void)setSearchCategory:(int)arg1;
- (int)searchCategory;
- (void)startWithSearchCompletionHandler:(id)arg1;
- (id)initWithSearchTerm:(id)arg1;
- (id)searchTerm;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;

@end