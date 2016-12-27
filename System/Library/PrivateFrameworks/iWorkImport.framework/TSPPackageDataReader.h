/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileCoordinatorDelegate.h>
#import <iWorkImport/TSPPassphraseConsumer.h>

@class NSURL, TSPPackage, NSString, TSPDocumentProperties, NSData;

@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate, TSPPassphraseConsumer> {

	NSURL* _URL;
	TSPPackage* _package;
	NSString* _lastPasswordAttempted;

}

@property (nonatomic,readonly) long long packageType; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) TSPDocumentProperties * documentProperties; 
@property (nonatomic,readonly) BOOL isPasswordProtected; 
@property (nonatomic,readonly) NSString * passwordHint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * lastPasswordAttempted; 
@property (nonatomic,readonly) NSString * passphraseHint; 
@property (nonatomic,readonly) NSData * keychainGenericItem; 
@property (nonatomic,readonly) NSString * service; 
-(long long)packageType;
-(BOOL)checkPassword:(id)arg1 ;
-(void)performReadUsingAccessor:(/*^block*/id)arg1 ;
-(NSString *)lastPasswordAttempted;
-(BOOL)hasDataAtRelativePath:(id)arg1 ;
-(CGImageSourceRef)newCGImageSourceAtRelativePath:(id)arg1 ;
-(id)initWithURL:(id)arg1 decryptionKey:(id)arg2 ;
-(CGDataProviderRef)newCGDataProviderAtRelativePath:(id)arg1 ;
-(CGImageRef)newCGImageAtRelativePath:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(BOOL)isPasswordProtected;
-(NSString *)passwordHint;
-(TSPDocumentProperties *)documentProperties;
-(BOOL)setPassphrase:(id)arg1 ;
@end

