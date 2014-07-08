/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSData, NSString;

@interface BRServerInfoRecordInfo : PBCodable <NSCopying> {
    unsigned long long _bounceNo;
    NSData *_encryptedBasename;
    NSString *_etag;
    NSString *_extension;
    NSString *_recordID;
    NSData *_recordProtectionInfo;
    NSString *_zoneName;
    NSData *_zoneProtectionInfo;
    struct { 
        unsigned int bounceNo : 1; 
    } _has;
}

@property(readonly) bool hasRecordID;
@property(retain) NSString * recordID;
@property(readonly) bool hasEtag;
@property(retain) NSString * etag;
@property(readonly) bool hasEncryptedBasename;
@property(retain) NSData * encryptedBasename;
@property bool hasBounceNo;
@property unsigned long long bounceNo;
@property(readonly) bool hasExtension;
@property(retain) NSString * extension;
@property(readonly) bool hasRecordProtectionInfo;
@property(retain) NSData * recordProtectionInfo;
@property(readonly) bool hasZoneName;
@property(retain) NSString * zoneName;
@property(readonly) bool hasZoneProtectionInfo;
@property(retain) NSData * zoneProtectionInfo;


- (void)setHasBounceNo:(bool)arg1;
- (id)zoneProtectionInfo;
- (bool)hasZoneProtectionInfo;
- (bool)hasZoneName;
- (id)recordProtectionInfo;
- (bool)hasRecordProtectionInfo;
- (bool)hasExtension;
- (void)setBounceNo:(unsigned long long)arg1;
- (unsigned long long)bounceNo;
- (bool)hasBounceNo;
- (id)encryptedBasename;
- (bool)hasEncryptedBasename;
- (bool)hasRecordID;
- (void)setZoneProtectionInfo:(id)arg1;
- (void)setRecordProtectionInfo:(id)arg1;
- (void)setEncryptedBasename:(id)arg1;
- (bool)hasEtag;
- (void)setEtag:(id)arg1;
- (id)etag;
- (void)copyTo:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setZoneName:(id)arg1;
- (id)zoneName;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)recordID;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)extension;
- (void)setExtension:(id)arg1;

@end