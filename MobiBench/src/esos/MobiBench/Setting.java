package esos.MobiBench;

public class Setting {
	private int target_partition;
	private int thread_num;
	
	private int filesize_read;
	private int filesize_write;
	private int io_size;
	private int file_sync_mode;

	private int transaction_num;
	private int sql_sync_mode;
	private int journal_mode;

	private boolean seq_write;
	private boolean seq_read;
	private boolean ran_write;
	private boolean ran_read;
	private boolean insert;
	private boolean update;
	private boolean delete;
	
	public void set_filesize_read(int value){
		filesize_read = value;
		return ;
	}	
	public int get_filesize_read(){
		return filesize_read;		
	}
	
	public void set_filesize_write(int value){
		filesize_write = value;
		return ;
	}
	public int get_filesize_write(){
		return filesize_write;		
	}
	
	public void set_io_size(int value){
		io_size = value;
		return ;
	}
	public int get_io_size(){
		return io_size;		
	}
	
	public void set_target_partition(int value){
		target_partition = value;
		return ;
	}
	public int get_target_partition(){
		return target_partition;		
	}
	
	public void set_file_sync_mode(int value){
		file_sync_mode = value;
		return ;
	}
	public int get_file_sync_mode(){
		return file_sync_mode;		
	}	
	public void set_thread_num(int value){
		thread_num = value;
		return ;
	}
	public int get_thread_num(){
		return thread_num;		
	}
	
	public void set_transaction_num(int value){
		transaction_num = value;
		return ;
	}	
	public int get_transaction_num(){
		return transaction_num;		
	}		
	public void set_journal_mode(int value){
		journal_mode = value;
		return ;
	}	
	public int get_journal_mode(){
		return journal_mode;		
	}	
	
	public void set_sql_sync_mode(int value){
		sql_sync_mode = value;
		return ;
	}	
	public int get_sql_sync_mode(){
		return sql_sync_mode;		
	}	
	
	/* Check box variable control function */
	public void set_seq_write(boolean value){
		seq_write = value;
		return ;
	}	
	public boolean get_seq_write(){
		return seq_write;
	}	
	
	public void set_seq_read(boolean value){
		seq_read = value;
		return ;
	}	
	public boolean get_seq_read(){
		return seq_read;
	}
	
	public void set_ran_write(boolean value){
		ran_write = value;
		return ;
	}	
	public boolean get_ran_write(){
		return ran_write;
	}
	
	public void set_ran_read(boolean value){
		ran_read = value;
		return ;
	}	
	public boolean get_ran_read(){
		return ran_read;
	}
		
	public void set_insert(boolean value){
		insert = value;
		return ;
	}	
	public boolean get_insert(){
		return insert;
	}
	
	public void set_update(boolean value){
		update = value;
		return ;
	}	
	public boolean get_update(){
		return update;
	}	
	
	public void set_delete(boolean value){
		delete = value;
		return ;
	}	
	public boolean get_delete(){
		return delete;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
