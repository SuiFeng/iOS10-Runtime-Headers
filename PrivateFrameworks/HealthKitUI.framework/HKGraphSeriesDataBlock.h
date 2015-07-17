/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKGraphSeriesDataBlock : NSObject {
    NSArray * _chartPoints;
    HKValueRange * _yValueRange;
}

@property (nonatomic, copy) NSArray *chartPoints;
@property (nonatomic, readonly) HKValueRange *yValueRange;

- (void).cxx_destruct;
- (id)chartPoints;
- (void)setChartPoints:(id)arg1;
- (id)yValueRange;
- (id)yValueRangeForXValueRange:(id)arg1 visibleYValueRange:(id*)arg2;

@end