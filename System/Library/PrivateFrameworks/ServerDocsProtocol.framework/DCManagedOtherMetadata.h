/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface DCManagedOtherMetadata : NSManagedObject
+(id)entityName;
+(id)otherMetadataForDocumentIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)saveOtherMetadata:(id)arg1 forDocumentIdentifier:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)dictionaryRepresentation;
-(void)updateWithValuesFromDictionary:(id)arg1 ;
@end

