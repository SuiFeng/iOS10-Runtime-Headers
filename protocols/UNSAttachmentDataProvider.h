/* Generated by RuntimeBrowser.
 */

@protocol UNSAttachmentDataProvider <NSObject>

@required

- (NSData *)data;

@optional

- (struct CGSize { double x1; double x2; })naturalSizeForAttachment:(UNNotificationAttachment *)arg1;
- (NSData *)thumbnailPNGOfSize:(struct CGSize { double x1; double x2; })arg1 forAttachment:(UNNotificationAttachment *)arg2;

@end
