/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface STPropertyStorage : NSObject  {
    struct _SsrwPropertyStorage { } *m_pPropertyStorage;
}


- (void)setBlobDocumentPropertyWithName:(id)arg1 to:(id)arg2;
- (void)setStringDocumentPropertyWithId:(int)arg1 to:(id)arg2;
- (void)setShortDocumentPropertyWithId:(int)arg1 to:(short)arg2;
- (void)setLongDocumentPropertyWithId:(int)arg1 to:(long)arg2;
- (id)getDocumentPropertyWithName:(id)arg1 propType:(int*)arg2;
- (id)getStringDocumentPropertyWithId:(int)arg1;
- (long)getLongDocumentPropertyWithId:(int)arg1;
- (id)initWithPropertyStorage:(struct _SsrwPropertyStorage { }*)arg1;
- (void)setDocumentPropertyWithId:(int)arg1 to:(id)arg2;
- (short)getShortDocumentPropertyWithId:(int)arg1;
- (id)getDocumentPropertyWithId:(int)arg1 propType:(int*)arg2;
- (void)close;
- (void)dealloc;

@end