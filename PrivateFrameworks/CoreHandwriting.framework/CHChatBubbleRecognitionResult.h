/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHChatBubbleRecognitionResult : CHEllipseRecognitionResult  {
    double _stemWidth;
    struct CGPoint { 
        double x; 
        double y; 
    } _stemLocation;
}

@property(readonly) struct CGPoint { double x1; double x2; } stemLocation;
@property(readonly) double stemWidth;


- (double)stemWidth;
- (struct CGPoint { double x1; double x2; })stemLocation;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(struct CGPoint { double x1; double x2; })arg4 size:(struct CGSize { double x1; double x2; })arg5 stemLocation:(struct CGPoint { double x1; double x2; })arg6 stemWidth:(double)arg7;
- (id).cxx_construct;

@end