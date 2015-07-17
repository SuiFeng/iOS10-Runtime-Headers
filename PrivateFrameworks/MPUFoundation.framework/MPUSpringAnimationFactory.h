/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUSpringAnimationFactory : MPUAnimationFactory {
    float  _damping;
    float  _mass;
    float  _stiffness;
    float  _velocity;
}

@property (nonatomic) float damping;
@property (nonatomic) float mass;
@property (nonatomic) float stiffness;
@property (nonatomic) float velocity;

+ (void)animateUsingSpringWithDamping:(float)arg1 mass:(float)arg2 stiffness:(float)arg3 velocity:(float)arg4 animations:(id /* block */)arg5 options:(unsigned int)arg6 completion:(id /* block */)arg7;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_newSpringAnimationForKeyPath:(id)arg1;
- (float)damping;
- (double)durationForEpsilon:(double)arg1;
- (float)mass;
- (void)setDamping:(float)arg1;
- (void)setMass:(float)arg1;
- (void)setStiffness:(float)arg1;
- (void)setVelocity:(float)arg1;
- (float)stiffness;
- (float)velocity;

@end