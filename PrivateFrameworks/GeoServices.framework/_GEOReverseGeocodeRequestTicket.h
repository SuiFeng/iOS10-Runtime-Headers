/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOReverseGeocodeRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket> {
    bool  _shiftLocationsIfNeeded;
}

@property (getter=isChainResultSet, nonatomic, readonly) bool chainResultSet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) NSString *resultSectionHeader;
@property (nonatomic, readonly) NSString *searchQuery;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) bool shouldEnableRedoSearch;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (id)initWithRequest:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 traits:(id)arg3;
- (id)searchQuery;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end
