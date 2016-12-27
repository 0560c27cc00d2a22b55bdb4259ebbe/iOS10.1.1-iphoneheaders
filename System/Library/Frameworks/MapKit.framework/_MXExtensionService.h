/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class _MXExtension, NSArray, NSError, NSUUID, UIViewController;

@interface _MXExtensionService : NSObject {

	_MXExtension* _extension;
	unsigned long long _state;
	NSArray* _returnItems;
	NSError* _error;
	UIViewController* _remoteViewController;
	NSUUID* _serviceIdentifier;

}

@property (nonatomic,retain) NSUUID * serviceIdentifier;                                  //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSArray * returnItems;                                       //@synthesize returnItems=_returnItems - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,readonly) _MXExtension * extension;                                  //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) int processIdentifier; 
-(id)init;
-(void)cancel;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)context;
-(UIViewController *)remoteViewController;
-(_MXExtension *)extension;
-(void)setRemoteViewController:(UIViewController *)arg1 ;
-(int)processIdentifier;
-(void)setServiceIdentifier:(NSUUID *)arg1 ;
-(id)initWithExtension:(id)arg1 serviceIdentifier:(id)arg2 ;
-(id)initWithExtension:(id)arg1 serviceIdentifier:(id)arg2 remoteViewController:(UIViewController*)arg3 ;
-(void)_completeServiceIfNeededWithError:(id)arg1 ;
-(void)completeServiceWithReturnItems:(id)arg1 error:(id)arg2 ;
-(id)vendorContext;
-(id)vendorContextWithErrorHandler:(/*^block*/id)arg1 ;
-(NSArray *)returnItems;
-(void)setReturnItems:(NSArray *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSUUID *)serviceIdentifier;
@end

