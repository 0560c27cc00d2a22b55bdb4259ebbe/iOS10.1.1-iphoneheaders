/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSQueryGenerationToken.h>

@interface _NSQueryGenerationToken : NSQueryGenerationToken {

	id _store;
	id _generationIdentifier;
	BOOL _isCompound;
	BOOL _unsupportedForStore;
	BOOL _isSingleton;
	BOOL _freeValueOnDealloc;

}
-(id)_token;
-(id)_generationalComponentForStore:(id)arg1 ;
-(id)_store;
-(id)initWithValue:(id)arg1 store:(id)arg2 ;
-(id)_initWithValue:(id)arg1 singleton:(BOOL)arg2 ;
-(id)_storesForRequestRoutingFrom:(id)arg1 ;
-(id)initWithValue:(id)arg1 store:(id)arg2 freeValueOnDealloc:(BOOL)arg3 ;
-(id)initWithCompoundValue:(id)arg1 ;
-(id)initForNonGenerationalStore:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)description;
@end

