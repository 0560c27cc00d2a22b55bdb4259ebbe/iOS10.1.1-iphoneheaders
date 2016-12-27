/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SFUCryptoUtils : NSObject
+(unsigned)ivLengthForKey:(id)arg1 ;
+(id)generateRandomSaltWithLength:(unsigned long long)arg1 ;
+(BOOL)generateRandomDataInBuffer:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)sha256HashFromData:(id)arg1 ;
+(BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1 ;
+(id)saltForSageFiles;
+(id)generateRandomSalt;
+(id)hashForPassphrase:(id)arg1 withSalt:(id)arg2 ;
+(unsigned)iterationCountFromPassphraseVerifier:(id)arg1 ;
+(id)saltFromVerifier:(id)arg1 saltLength:(unsigned long long)arg2 ;
+(BOOL)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2 ;
+(id)newBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(BOOL)arg3 zipStream:(id*)arg4 ;
+(id)newBufferedInputStreamForDecryptingZippedBundle:(id)arg1 key:(id)arg2 zipArchive:(id)arg3 isDeflated:(BOOL)arg4 zipStream:(id*)arg5 ;
+(id)decodePassphraseHint:(id)arg1 ;
+(id)sha256HashFromStorage:(id)arg1 ;
+(id)sha256HashFromString:(id)arg1 ;
+(id)sha1HashFromStorage:(id)arg1 ;
+(id)encodePassphraseHint:(id)arg1 ;
+(id)generatePassphraseVerifierForKey:(id)arg1 verifierVersion:(unsigned short)arg2 ;
@end

