/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSString, PFUbiquityLocation, NSURL, NSOperationQueue;

@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter> {

	NSString* _storeName;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _uuidString;
	PFUbiquityLocation* _uuidFileLocation;
	NSURL* _presentedItemURL;
	BOOL _usedExistingUUIDFile;

}

@property (nonatomic,readonly) NSString * uuidString;                              //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * uuidFileLocation;              //@synthesize uuidFileLocation=_uuidFileLocation - In the implementation block
@property (nonatomic,readonly) BOOL usedExistingUUIDFile;                          //@synthesize usedExistingUUIDFile=_usedExistingUUIDFile - In the implementation block
@property (copy,readonly) NSURL * presentedItemURL;                                //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(BOOL)identifyContainer:(id*)arg1 ;
-(BOOL)usedExistingUUIDFile;
-(BOOL)replaceIdentifierWithUUID:(id)arg1 error:(id*)arg2 ;
-(void)setUUIDStringFromLocation:(id)arg1 ;
-(BOOL)writeToDisk:(id*)arg1 ;
-(PFUbiquityLocation *)uuidFileLocation;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(NSString *)uuidString;
@end

