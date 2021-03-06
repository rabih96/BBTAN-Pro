//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FIRASqliteStore : NSObject
{
    struct sqlite3 *_sqliteHandle;
    NSMutableDictionary *_statementCache;
    const char *_queueLabel;
    NSString *_databasePath;
}

- (void).cxx_destruct;
- (_Bool)beginTransaction;
- (_Bool)bindValues:(id)arg1 toStatement:(struct sqlite3_stmt *)arg2 error:(id *)arg3;
- (void)cleanUpStatement:(struct sqlite3_stmt *)arg1 forQuery:(id)arg2;
- (_Bool)closeAndDeleteDatabase;
- (void)closeDatabase;
- (id)columnsForTableWithName:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void)dealloc;
- (_Bool)deleteAllRecordsFromTableWithName:(id)arg1 error:(id *)arg2;
- (_Bool)deleteRecordFromTableWithName:(id)arg1 columnName:(id)arg2 columnValue:(id)arg3 error:(id *)arg4;
- (id)deleteRecordsFromTableWithName:(id)arg1 condition:(id)arg2 parameterValues:(id)arg3 error:(id *)arg4;
- (_Bool)endTransaction;
- (_Bool)ensureTableWithName:(id)arg1 createSQL:(id)arg2 requiredColumnNames:(id)arg3 addOnColumns:(id)arg4 error:(id *)arg5;
- (id)errorDescriptionForDatabaseOperation:(id)arg1;
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2;
- (_Bool)executeSQLStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (void)finalizeAndClearStatements;
- (id)initWithDatabasePath:(id)arg1;
- (id)lastErrorMessage;
- (id)monitorContextForDatabaseOperation:(id)arg1;
- (id)numberForQuery:(id)arg1 parameterValues:(id)arg2 error:(id *)arg3;
- (_Bool)openAndValidateDatabase:(id *)arg1;
- (_Bool)performTransaction:(CDUnknownBlockType)arg1;
- (struct sqlite3_stmt *)prepareSQL:(id)arg1 error:(id *)arg2;
- (id)recordsForQuery:(id)arg1 parameterValues:(id)arg2 error:(id *)arg3;
- (id)recordsForQuery:(id)arg1 parameterValues:(id)arg2 error:(id *)arg3 withFilter:(CDUnknownBlockType)arg4;
- (_Bool)rollbackTransaction;
- (id)rowCountForTableWithName:(id)arg1 columnName:(id)arg2 columnValue:(id)arg3 error:(id *)arg4;
- (id)rowCountForTableWithName:(id)arg1 error:(id *)arg2;
- (void)setDatabaseError:(id *)arg1 operation:(id)arg2;
@property(readonly, nonatomic) struct sqlite3 *sqliteHandle;
- (struct sqlite3_stmt *)statementForQuery:(id)arg1 error:(id *)arg2;
- (struct sqlite3_stmt *)statementForQuery:(id)arg1 parameterValues:(id)arg2 error:(id *)arg3;
- (id)tableExists:(id)arg1 error:(id *)arg2;
- (_Bool)updateRecord:(id)arg1 inTableWithName:(id)arg2 columnName:(id)arg3 columnValue:(id)arg4 error:(id *)arg5;
- (struct sqlite3_stmt *)updateStatementForRecord:(id)arg1 inTableWithName:(id)arg2 columnName:(id)arg3 columnValue:(id)arg4 error:(id *)arg5;
- (_Bool)upsertRecord:(id)arg1 inTableWithName:(id)arg2 error:(id *)arg3;
- (struct sqlite3_stmt *)upsertStatementForRecord:(id)arg1 inTableWithName:(id)arg2 error:(id *)arg3;
- (_Bool)validateDatabaseWithError:(id *)arg1;
- (id)validateTableWithName:(id)arg1 requiredColumnNames:(id)arg2 addOnColumns:(id)arg3 error:(id *)arg4;
- (id)valueAtColumn:(int)arg1 forStatement:(struct sqlite3_stmt *)arg2;

@end

