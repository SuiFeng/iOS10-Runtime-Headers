/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIZephyrCandidate : TIKeyboardCandidateSingle {
    unsigned long long  _ageForConnectionsMetrics;
    NSString * _fromBundleId;
    bool  _fromBundleIdWhitelistedForMetrics;
    bool  _isFromPhraseDictionary;
    bool  _isFromTextChecker;
    bool  _isSecureContentCandidate;
    bool  _isSendCurrentLocation;
    NSString * _label;
    TIProactiveTrigger * _proactiveTrigger;
    bool  _targetBundleIdWhitelistedForMetrics;
    unsigned int  _usageTrackingMask;
    unsigned long long  _wordOriginFeedbackID;
}

@property (nonatomic) unsigned long long ageForConnectionsMetrics;
@property (nonatomic, copy) NSString *fromBundleId;
@property (nonatomic) bool fromBundleIdWhitelistedForMetrics;
@property (nonatomic) bool isFromPhraseDictionary;
@property (nonatomic) bool isFromTextChecker;
@property (nonatomic) bool isSendCurrentLocation;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool targetBundleIdWhitelistedForMetrics;

+ (bool)supportsSecureCoding;
+ (int)type;

- (unsigned long long)ageForConnectionsMetrics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fromBundleId;
- (bool)fromBundleIdWhitelistedForMetrics;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4 secureContentCandidate:(bool)arg5 proactiveTrigger:(id)arg6;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAutocorrection;
- (bool)isFromPhraseDictionary;
- (bool)isFromTextChecker;
- (bool)isSecureContentCandidate;
- (bool)isSendCurrentLocation;
- (id)label;
- (id)proactiveTrigger;
- (void)setAgeForConnectionsMetrics:(unsigned long long)arg1;
- (void)setFromBundleId:(id)arg1;
- (void)setFromBundleIdWhitelistedForMetrics:(bool)arg1;
- (void)setIsFromPhraseDictionary:(bool)arg1;
- (void)setIsFromTextChecker:(bool)arg1;
- (void)setIsSendCurrentLocation:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setTargetBundleIdWhitelistedForMetrics:(bool)arg1;
- (bool)targetBundleIdWhitelistedForMetrics;
- (unsigned int)usageTrackingMask;
- (unsigned long long)wordOriginFeedbackID;

@end
