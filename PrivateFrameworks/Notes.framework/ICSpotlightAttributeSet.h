/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICSpotlightAttributeSet : NSObject {
    NSArray * _authors;
    NSString * _contentText;
    NSString * _identifier;
    NSDate * _modificationDate;
    NSString * _objectIdentifier;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSArray *authors;
@property (nonatomic, readonly, copy) NSString *contentText;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly, copy) NSString *objectIdentifier;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)authors;
- (id)contentText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightAttributeSet;
- (id)coreSpotlightAttributeSetForUserActivity;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 objectIdentifier:(id)arg2 modificationDate:(id)arg3 title:(id)arg4 contentText:(id)arg5 authors:(id)arg6;
- (id)modificationDate;
- (id)objectIdentifier;
- (id)title;

@end