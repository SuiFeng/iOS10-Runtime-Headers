/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUBorderDrawingCache : NSObject {
    MPUBorderView * _borderView;
    float  _displayScale;
    NSCache * _images;
}

@property (nonatomic) float displayScale;

- (void).cxx_destruct;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (id)_borderView;
- (void)_invalidate;
- (void)dealloc;
- (float)displayScale;
- (id)imageForBorderConfiguration:(id)arg1;
- (id)init;
- (void)setDisplayScale:(float)arg1;

@end