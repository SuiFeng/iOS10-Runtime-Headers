/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLHIDEventOperatorComposition : NSObject {
    struct __IOHIDEventSystemClient { } * _eventSystemClient;
    PLOperator * _operator;
    id /* block */  _operatorBlock;
}

@property struct __IOHIDEventSystemClient { }*eventSystemClient;
@property (retain) PLOperator *operator;
@property (nonatomic, copy) id /* block */ operatorBlock;

- (void).cxx_destruct;
- (struct __IOHIDEventSystemClient { }*)eventSystemClient;
- (void)handleEvent:(struct __IOHIDEvent { }*)arg1;
- (id)initWithOperator:(id)arg1 forUsagePage:(unsigned long long)arg2 andUsage:(unsigned long long)arg3 withBlock:(id /* block */)arg4;
- (id)operator;
- (id /* block */)operatorBlock;
- (void)setEventSystemClient:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)setOperator:(id)arg1;
- (void)setOperatorBlock:(id /* block */)arg1;

@end
