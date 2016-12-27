/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASProtocolCapabilities : NSObject {

	NSString* _calConstraintsPlistPath;
	NSString* _abConstraintsPlistPath;

}

@property (nonatomic,retain) NSString * calConstraintsPlistPath;              //@synthesize calConstraintsPlistPath=_calConstraintsPlistPath - In the implementation block
@property (nonatomic,retain) NSString * abConstraintsPlistPath;               //@synthesize abConstraintsPlistPath=_abConstraintsPlistPath - In the implementation block
-(BOOL)supportsDraftFolderSync;
-(BOOL)supportsMailboxSearch;
-(BOOL)supportsEmailFlagging;
-(BOOL)supportsConversations;
-(BOOL)supportsProtocolVersion:(id)arg1 ;
-(id)initWithProtocolVersionString:(id)arg1 ;
-(BOOL)supportsSettingsCommand;
-(BOOL)supportsItemOperationsCommand;
-(BOOL)serverUpdatesAttendeeStatusOnEvents;
-(id)calendarConstraintsPath;
-(id)addressBookConstraintsPath;
-(BOOL)supportsNoteSyncing;
-(BOOL)supportsFreeBusyLookup;
-(id)_calConstraintsPlistPath;
-(id)_abConstraintsPlistPath;
-(NSString *)calConstraintsPlistPath;
-(void)setCalConstraintsPlistPath:(NSString *)arg1 ;
-(NSString *)abConstraintsPlistPath;
-(void)setAbConstraintsPlistPath:(NSString *)arg1 ;
@end

